from setuptools import find_packages, setup

package_name = 'my_py_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rag0n',
    maintainer_email='rag0n@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "py_node = my_py_pkg.my_first_node:main",
            "state_publisher = my_py_pkg.robot_state_publisher:main",
            "state_subscriber = my_py_pkg.robot_state_subscriber:main",
            "example_server = my_py_pkg.example_server:main",
            "example_client = my_py_pkg.example_client:main",
            "example_oop_client = my_py_pkg.example_client_oop:main",
            "mine_sub = my_py_pkg.mine_subscriber_1:main",
            "mine_pub = my_py_pkg.mine_publisher_1:main",
            "mine_pub_loud = my_py_pkg.mine_publisher_loud:main",
            "mine_sub_loud = my_py_pkg.mine_subscriber_loud:main",
            "cst_int_publisher = my_py_pkg.custom_interface_perception_publisher:main",
            "cst_int_subscriber = my_py_pkg.custom_interface_perception_subscriber:main",
            "mine_pub_loud_2 = my_py_pkg.mine_publisher_loud_2:main",
            "mine_sub_loud_2 = my_py_pkg.mine_subscriber_loud_2:main",
            "mine_client_perception = my_py_pkg.custom_interface_perceptron_client:main",
            "mine_service_perception = my_py_pkg.custom_interface_perceptron_service:main",
        ],
    },
)
