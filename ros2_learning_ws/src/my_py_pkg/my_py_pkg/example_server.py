#!/usr/bin/env python3
from rclpy.node import Node
import rclpy
from example_interfaces.srv import AddTwoInts


class ServiceNode(Node):
    def __init__(self):
        super().__init__("service_node")
        self.get_logger().info("Servis nodu aktif")

        self.server_ = self.create_service(AddTwoInts,"add_two_ints_service",self.service_callback)

    def service_callback(self,request,response):
        response.sum = request.a + request.b
        self.get_logger().info(f"{request.a} + {request.b} = {response.sum}")
        return response


def main():
    rclpy.init()
    node = ServiceNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()

