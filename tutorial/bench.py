from benchmarker import Benchmarker

def total(n):
  i = 1
  j = 1
  result = 0

  while (n > i):
    j = 1
    while (i > j):
      result += 1
      j += 1
    i += 1

  return result

print(total(10000))

with Benchmarker() as bm:
    with bm("10000"):
        total(10000)
