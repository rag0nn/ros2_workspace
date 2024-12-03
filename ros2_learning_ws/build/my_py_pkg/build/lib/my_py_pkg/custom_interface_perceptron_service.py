from my_custom_interface.srv import PerceptronService      

import rclpy
from rclpy.node import Node
import math


class MyPerceptronService(Node):

    def __init__(self):
        super().__init__('perceptron_service_node')
        self.srv = self.create_service(PerceptronService, 'perception_topic', self.perception_callback)      
        self.bias = 0.5
        self.get_logger().info("Service Activated...")

    def perception_callback(self, request, response):
        result = 1
        for i in request.inputs:
            result *= i

        result += self.bias
        if request.activation == 'sigmoid':
            result = 1 / (1 + math.exp(-result))  

        response.result = result                         
        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MyPerceptronService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()