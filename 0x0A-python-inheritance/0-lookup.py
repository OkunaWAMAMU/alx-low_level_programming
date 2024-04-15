def lookup(obj):
    """Returns a list of available attributes and methods of an object.

    Args:
        obj: The object to inspect.

    Returns:
        list: A list containing the names of available attributes and methods.
    """
    attributes = []
    for attr in dir(obj):
        try:
            getattr(obj, attr)
            attributes.append(attr)
        except AttributeError:
            continue
    return attributes
