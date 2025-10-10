from grading.core import get_passing_students
from _grading import get_passing_students as get_passing_students_cpp

# Export the version given in project metadata
from importlib import metadata

__version__ = metadata.version(__package__)
del metadata
