import rclpy
from rclpy.node import Node

from my_custom_interface.msg import PerceptionInputs    
import numpy as np


class PerceptionParamsPublisher(Node):

    def __init__(self):
        super().__init__('perception_input_publisher')
        self.publisher_ = self.create_publisher(PerceptionInputs, 'inputs', 10)  # CHANGE
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

        self.input_count = 5

    def timer_callback(self):
        inputs = np.random.randn(self.input_count).astype(np.float64).tolist()
        msg = PerceptionInputs()                                         # CHANGE
        msg.activation ='sigmoid'
        msg.inputs = inputs                                     # CHANGE
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing {self.i} {msg.inputs} {msg.activation}')       # CHANGE
        self.i += 1


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = PerceptionParamsPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()