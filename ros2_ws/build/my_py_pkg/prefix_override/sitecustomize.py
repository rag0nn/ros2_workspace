import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/rag0n/Desktop/project/ros2_ws/install/my_py_pkg'
