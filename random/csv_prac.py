import csv

# with open('a.csv', 'r') as csv_file:
#     with open('new.csv', 'w') as new_file:
#         csv_reader = csv.reader(csv_file)
#         csv_writer = csv.writer(new_file, delimiter='\t')
#         for line in csv_reader:
#             csv_writer.writerow(line)
with open('new.csv', 'r') as file:
    for line in csv.DictReader(file, delimiter='\t'):
        print(line['email'])
