#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import String # Publish edilecek veri türünü burdan çekeceğiz

class RobotStateSubscriber(Node):
    def __init__(self):
        super().__init__("subscriber_node")
        self.counter = 0
        self.subsriber = self.create_subscription(String,"state1",self.subscription_callback,10)

        self.get_logger().info("Subscriber Cagirildi!")
    
    def subscription_callback(self,msg):
        self.get_logger().info(f" Alindi: {msg}")

def main():
    rclpy.init()
    node = RobotStateSubscriber()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()