from rclpy.node import Node
import rclpy
from my_custom_interfaces.msg import Perception


class PubNode(Node):
    def __init__(self):
        super().__init__("interface-publisher-node")

        self.publisher = self.create_publisher(Perception,"my_interface",10)

        # Zamanlayıcı ile mesaj yayınlama
        self.timer = self.create_timer(1.0, self.publish_callback)

    def publish_callback(self):
        msg = Perception()
        msg.inputs = 0.2
        msg.activation = 'sigmoid'
        self.publisher.publish(msg)
        self.get_logger().info(f"Published: x={msg.x}, y={msg.y}, label={msg.label}")


def main():
    rclpy.init()
    node = PubNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()