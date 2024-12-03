import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class VideoPublisher(Node):
    def __init__(self,vid_path,topic_name= 'camera/image_raw'):
        super().__init__('video_publisher')
        self.publisher_ = self.create_publisher(Image,topic_name, 10)
        self.bridge = CvBridge()
        self.timer = self.create_timer(0.1, self.timer_callback)  # 10 Hz
        self.cap = cv2.VideoCapture(vid_path)  # Video dosyasının yolunu belirtin

        
        if not self.cap.isOpened():
            self.get_logger().error("Video dosyası açılamadı.")
            raise RuntimeError("Video açılamadı.")
        

    def timer_callback(self):
        ret, frame = self.cap.read()
        if not ret:
            self.get_logger().info("Video bitti.")
            self.cap.set(cv2.CAP_PROP_POS_FRAMES, 0)  # Videoyu tekrar başa sarar
            return

        msg = self.bridge.cv2_to_imgmsg(frame, encoding="bgr8")
        self.publisher_.publish(msg)
        self.get_logger().info(f"Yayınlanıyor: {frame.shape}")

def main(args=None):
    rclpy.init(args=args)
    node = VideoPublisher("/home/rag0n/Desktop/project_simulations/test_vids/vid_short.mp4")
    rclpy.spin(node)
    node.cap.release()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
