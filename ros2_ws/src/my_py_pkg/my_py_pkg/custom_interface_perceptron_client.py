from my_custom_interface.srv import PerceptronService
import sys
import rclpy
from rclpy.node import Node
import numpy as np

class PerceptronClient(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(PerceptronService, 'perception_topic')   
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = PerceptronService.Request()                          

    def send_request(self):
        self.input_count = 5    

        inputs = np.random.randn(self.input_count).astype(np.float64).tolist()
        self.req.inputs = inputs         
        self.req.activation = 'sigmoid'            
        self.future = self.cli.call_async(self.req)


def main(args=None):
    rclpy.init(args=args)

    perceptron_client_node = PerceptronClient()
    perceptron_client_node.send_request()

    while rclpy.ok():
        rclpy.spin_once(perceptron_client_node)
        if perceptron_client_node.future.done():
            try:
                response = perceptron_client_node.future.result()
            except Exception as e:
                perceptron_client_node.get_logger().info(
                    'Service call failed %r' % (e,))
            else:
                perceptron_client_node.get_logger().info(
                    f'Result of perception: inputs-->{perceptron_client_node.req.inputs} {perceptron_client_node.req.activation} results--> {response.result}')
            break

    perceptron_client_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()