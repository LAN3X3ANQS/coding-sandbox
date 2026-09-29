students = [
    {"name": "Ada", "score": 85},
    {"name": "John", "score": 62},
    {"name": "Mary", "score": 91}
]

def passed(score):
    return score >= 50

for student in students:
    if passed(student["score"]):
        print(student["name"], "passed")
    else:
        print(student["name"], "failed")