import grading


def test_grading():
    students = {
        "Alice": [80, 90, 100],
        "Bob": [59, 60, 61],
        "Charlie": [40, 50, 45],
    }

    passing = grading.get_passing_students(students)
    assert len(passing) == 2
    assert "Alice" in passing
    assert "Bob" in passing
