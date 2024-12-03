import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class VideoSubscriber(Node):
    def __init__(self,topic_name='camera/image_raw',):
        super().__init__('video_subscriber')
        self.subscription = self.create_subscription(
            Image,
            topic_name,  # Publisher'daki topic adı
            self.listener_callback,
            10)
        self.subscription  # Geçerli referansı tutmak için
        self.bridge = CvBridge()

    def listener_callback(self, msg):
        # Mesajı OpenCV formatına dönüştür
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        # OpenCV ile görüntüyü göster
        cv2.imshow("Subscribed Video Feed", frame)

        # 'q' tuşuna basarak çıkış yapabilirsiniz
        if cv2.waitKey(1) & 0xFF == ord('q'):
            self.get_logger().info("Çıkış yapılıyor...")
            rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    node = VideoSubscriber()
    rclpy.spin(node)
    cv2.destroyAllWindows()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
