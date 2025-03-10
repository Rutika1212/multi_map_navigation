from setuptools import find_packages
from setuptools import setup

setup(
    name='multi_map_navigation',
    version='0.0.0',
    packages=find_packages(
        include=('multi_map_navigation', 'multi_map_navigation.*')),
)
