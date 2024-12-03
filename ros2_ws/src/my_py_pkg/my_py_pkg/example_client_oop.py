#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
from functools import partial

class ClientNode(Node):
    def __init__(self):
        super().__init__("client_oop_nodum")
        self.call_add_two_ints_client(3,4)

    def call_add_two_ints_client(self,a,b):
        client = self.create_client(AddTwoInts,"add_two_ints_example")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Servis bekleniyor...")

        request=  AddTwoInts.Request()
        request.a = a
        request.b = b

        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_call,a=a,b=b))

    def callback_call(self,future,a,b):
        try:
            response = future.result()
            self.get_logger().info(f"response = {response.sum}")
        except Exception as e:
            self.get_logger().error("servis hata aldı %r" % {e,})
        

def main():
    rclpy.init()
    node = ClientNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()