'''6) Write a Python program that displays information about an employee. Use nested 
dictionary to do this task.'''
employee = {
    "may": {"age": "22", "gender": "Male", "salary": "10000"},
    "ray": {"age": "27", "gendar": "Male", "salary": "20000"},
    "roy": {"age": "29", "gender": "Female","salary": "50000"},
}
for i in employee.items():
    print(f"\nname : {i[0]} ",end="\t")
    for l in i[1].items():
        print(f"{l[0]}: {l[1]}",end="\t")