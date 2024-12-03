from rclpy.node import Node
import rclpy
import numpy as np
from my_custom_interface.msg import Loud

class MyNodeClass(Node):
    def __init__(self,name):
        super().__init__(name)
        self.counter_ = 0
        self.publisher_ = self.create_publisher(Loud,"loud_topic",100)
        self.timer_ = self.create_timer(1,self.publish_callback)
        self.get_logger().info("MyNode Yayıncı Çağrıldı")

    def publish_callback(self):
        width,height,channel = 1000,500,3
        loud = np.random.normal(120,100,width * height * channel)
        loud = np.clip(loud, 1, 254).astype(np.int16).tolist()

        msg = Loud()
        msg.data = loud
        msg.width = width
        msg.height = height
        msg.channel = channel
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

