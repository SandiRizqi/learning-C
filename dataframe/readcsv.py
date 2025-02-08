import csv
import time
import os

class Timer:
    def __init__(self):
        self.start = None
        self.finish = None

    def start_timer(self):
        self.start = time.time()

    def finish_timer(self):
        self.finish = time.time()

    def get_duration(self):
        return self.finish - self.start

def read_csv(filepath, delimiter=','):
    data = []
    try:
        with open(filepath, 'r', encoding='utf-8') as file:
            reader = csv.reader(file, delimiter=delimiter)
            print("Reading data...")
            data = [row for row in reader]
    except FileNotFoundError:
        print(f"Error: Could not open file: {filepath}")
    
    return data

if __name__ == "__main__":
    filename = input("Enter CSV file path: ")
    
    my_timer = Timer()
    my_timer.start_timer()
    
    csv_data = read_csv(filename, ',')
    
    file_size = os.path.getsize(filename) if os.path.exists(filename) else 0
    print(f"Memory Allocation : {file_size} bytes")

    my_timer.finish_timer()
    print(f"The system spends: {my_timer.get_duration():.6f} seconds")

    # Uncomment to print CSV content
    # for row in csv_data:
    #     print(" ".join(row))
