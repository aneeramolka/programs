import csv
with open('file1.csv','r') as file1:
    reader=csv.reader(file1)
    for row in reader:
        print(row)
    
