#!/usr/bin/python3
"""
This module contains a function to lookup attributes and methods of an object.
"""

def lookup(obj):
    """
    Returns a list of available attributes and methods of an object.

    Parameters:
        obj: Any object

    Returns:
        list: List of attributes and methods
    """
    return dir(obj)
