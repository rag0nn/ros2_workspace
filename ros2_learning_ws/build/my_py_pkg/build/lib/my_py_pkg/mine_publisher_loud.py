from rclpy.node import Node
import rclpy
from std_msgs.msg import Int16MultiArray
import numpy as np


class MyNodeClass(Node):
    def __init__(self,name):
        super().__init__(name)
        self.counter_ = 0
        self.publisher_ = self.create_publisher(Int16MultiArray,"loud_topic",100)
        self.timer_ = self.create_timer(1,self.publish_callback)
        self.get_logger().info("MyNode Yayıncı Çağrıldı")

    def publish_callback(self):
        width,height,channel = 100,100,3
        loud = np.random.normal(120,100,width * height * channel)
        loud = np.clip(loud, 1, 254).astype(np.int16).tolist()
        for i in [width,height,channel]: loud.append(i)
        msg = Int16MultiArray()
        msg.data = loud
        self.publisher_.publish(msg)
        self.get_logger().info(f"Yayin {self.counter_}: [{msg.data[0]}..]")
        self.counter_ += 1



def main():
    rclpy.init()
    node = MyNodeClass("LOUD_PUB_001")
    rclpy.spin(node)
    rclpy.shutdown()
        
if __name__ == "__main__":
    main()

