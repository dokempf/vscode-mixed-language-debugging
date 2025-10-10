def calculate_average(grades):
    """Calculate the average grade from a list of numbers."""
    total = 0
    for grade in grades:
        total += grade
    average = total / len(grades)
    return round(average, 2)


def get_passing_students(students):
    """Return a list of students who passed (average >= 60)."""
    passing = []
    for name, grades in students.items():
        avg = calculate_average(grades)
        if avg > 60:
            passing.append(name)
    return passing
