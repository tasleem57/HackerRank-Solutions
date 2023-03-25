if __name__ == '__main__':
    #creating empty list
    students = []
    #creating empty set to keep just the grades if there are repetitions.
    grades = set()
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name,score])
        grades.add(score)
    #result is sorted students list by grade first and than by name
    result = sorted(students, key=lambda x: (x[1], x[0]))
    #I am converting set to list and than on index 0 I have the lowest grade so on index 1 is the second lowest
    second_grade = sorted(list(grades))[1]
    #printing out result
    for x in result:
        if x[1] == second_grade:
            print(x[0])
