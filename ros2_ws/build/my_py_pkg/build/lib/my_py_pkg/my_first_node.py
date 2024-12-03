#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

class MyNode(Node):
    def __init__(self):
        super().__init__("ilk_node")
        self.counter = 0

        self.get_logger().info("Merhaba! çagirildim!")
        self.create_timer(0.5,self.timer_cllback) # loop oluşturur

    def timer_cllback(self):
        self.counter += 1
        self.get_logger().info(f"Hop {self.counter}")

def main():
    rclpy.init()
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()