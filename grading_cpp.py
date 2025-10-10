from grading import get_passing_students_cpp


def main():
    students = {
        "Alice": [80, 90, 100],
        "Bob": [59, 60, 61],
        "Charlie": [40, 50, 45],
    }

    passing = get_passing_students_cpp(students)
    print("Passing students:", passing)


if __name__ == "__main__":
    main()
