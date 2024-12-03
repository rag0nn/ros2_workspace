from rclpy.node import Node
import rclpy
from example_interfaces.msg import Int32


class MyNodeClass(Node):
    def __init__(self,name):
        super().__init__(name)

        self.subscriber_ = self.create_subscription(Int32,"test_topic",self.subscribe_callback,10)
        self.get_logger().info("MyNode Abone Çağrıldı")

    def subscribe_callback(self,msg):
        self.get_logger().info(f"Alinan Veri: {msg.data}")



def main():
    rclpy.init()
    node = MyNodeClass("TEST_SUB_001")
    rclpy.spin(node)
    rclpy.shutdown()
        
if __name__ == "__main__":
    main()