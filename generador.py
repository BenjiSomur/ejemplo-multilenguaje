import random
import sys
from datetime import datetime

random.seed(datetime.now())

while True:
    numero = random.randint(0, 10000) + 1
    sys.stdout.write(str(numero))
    sys.stdout.write("\n")
