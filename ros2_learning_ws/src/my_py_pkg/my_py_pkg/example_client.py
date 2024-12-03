#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

def main():
    rclpy.init()
    node = Node("Example_client_node")
    client = node.create_client(AddTwoInts,"add_two_ints_example")
    while not client.wait_for_service(1.0):
        node.get_logger().warn("Servis bekleniyor...")
    
    request = AddTwoInts.Request()
    request.a = 5
    request.b = 10

    future = client.call_async(request)
    rclpy.spin_until_future_complete(node,future)
    
    try:
        response = future.result()
        node.get_logger().info(f"SONUC: {response.sum}")
    except Exception as e:
        node.get_logger().error("servis aramasında hata: %r" & (e,))

    rclpy.shutdown()

if __name__ == "__main__":
    main()