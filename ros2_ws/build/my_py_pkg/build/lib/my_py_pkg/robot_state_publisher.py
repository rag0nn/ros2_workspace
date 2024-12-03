#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import String # Publish edilecek veri türünü burdan çekeceğiz

class RobotStatePublisher(Node):
    def __init__(self):
        super().__init__("publisher_node")
        self.counter = 0

        self.publisher_ = self.create_publisher(String,"state1",10)
        self.timer_ = self.create_timer(0.5,self.publish_state)

        self.get_logger().info("Publisher Cagirildi!")
    
    def publish_state(self):
        self.counter += 1
        msg = String()
        msg.data = f"Hoppaa {self.counter}"
        self.publisher_.publish(msg)
        self.get_logger().info("Yayinlaniyor: "+msg.data)

def main():
    rclpy.init()
    node = RobotStatePublisher()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()