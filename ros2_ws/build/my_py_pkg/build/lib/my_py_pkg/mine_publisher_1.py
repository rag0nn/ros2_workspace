from rclpy.node import Node
import rclpy
from example_interfaces.msg import Int32
#from std_msgs.msg import Float32

import random


class MyNodeClass(Node):
    def __init__(self,name):
        super().__init__(name)
        self.publisher_ = self.create_publisher(Int32,"test_topic",10)
        self.timer_ = self.create_timer(1,self.publish_callback)
        self.get_logger().info("MyNode Yayıncı Çağrıldı")

    def publish_callback(self):
        msg = Int32()
        msg.data = random.randint(0,100)
        self.publisher_.publish(msg)
        self.get_logger().info(f"Yayin: {msg.data}")



def main():
    rclpy.init()
    node = MyNodeClass("TEST_PUB_001")
    rclpy.spin(node)
    rclpy.shutdown()
        
if __name__ == "__main__":
    main()