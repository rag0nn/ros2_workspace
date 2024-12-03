from rclpy.node import Node
import rclpy
from std_msgs.msg import Int16MultiArray
import cv2 
import numpy as np

class MyNodeClass(Node):
    def __init__(self,name):
        super().__init__(name) 

        self.subscriber_ = self.create_subscription(Int16MultiArray,"loud_topic",self.subscribe_callback,10)
        self.get_logger().info("MyNode Abone Çağrıldı")


    def subscribe_callback(self,msg):

        width,height,channel = msg.data[-3:]
        window = np.reshape(msg.data[:-3],(height,width,channel))


        # Ekranda görüntüyü göster
        cv2.imshow("Received Image", window)
        
        # Pencereyi güncellemek için bekleme fonksiyonu ekleyin
        cv2.waitKey(1)  # 1 ms boyunca pencereyi günceller

        self.get_logger().info(f"{type(window)} - {window.shape} - [{window[0][0][0]}...]")









def main():
    rclpy.init()
    node = MyNodeClass("LOUD_SUB_001")
    rclpy.spin(node)
    rclpy.shutdown()
        
if __name__ == "__main__":
    main()