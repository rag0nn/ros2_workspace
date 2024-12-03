from rclpy.node import Node
import rclpy
from my_custom_interface.msg import Loud
import cv2 
import numpy as np

class MyNodeClass(Node):
    def __init__(self,name):
        super().__init__(name) 

        self.subscriber_ = self.create_subscription(Loud,"loud_topic",self.subscribe_callback,10)
        self.get_logger().info("MyNode Abone Çağrıldı")

        self.counter = 0


    def subscribe_callback(self,msg):
        window = np.reshape(msg.data,(msg.height,msg.width,msg.channel))
        """
        if self.counter == 0:
            self.writer = cv2.VideoWriter('output.avi',cv2.VideoWriter_fourcc(*'XVID'),5.0,(msg.width,msg.height))
        # Ekranda görüntüyü göster
        #cv2.imshow("Received Image", window)
        
        # Pencereyi güncellemek için bekleme fonksiyonu ekleyin
        #cv2.waitKey(1)  # 1 ms boyunca pencereyi günceller
        self.writer.write(window)
        """

        self.get_logger().info(f"{type(window)} - {window.shape} - [{window[0][0][0]}...]")
        self.counter += 1


def main():
    rclpy.init()
    node = MyNodeClass("LOUD_SUB_001")
    rclpy.spin(node)
    rclpy.shutdown()
        
if __name__ == "__main__":
    main()