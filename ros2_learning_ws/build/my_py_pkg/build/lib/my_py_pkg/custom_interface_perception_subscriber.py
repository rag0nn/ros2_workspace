import rclpy
from rclpy.node import Node

from my_custom_interface.msg import PerceptionInputs                     
import math

class PorceptionParamsSubscriber(Node):

    def __init__(self):
        super().__init__('perception_input_subscriber')
        self.subscription = self.create_subscription(
            PerceptionInputs,                                        
            'inputs',
            self.listener_callback,
            10)
        self.subscription
        
        self.bias = 0.5

    def listener_callback(self, msg):
        self.get_logger().info(f'Got {msg.inputs} {msg.activation} ')
        
        result = 1
        for i in msg.inputs:
            result *= i

        result += self.bias

        if msg.activation == 'sigmoid':
            result = 1 / (1 + math.exp(-result))

        self.get_logger().info(f"Calculation: {result}") 


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = PorceptionParamsSubscriber()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()