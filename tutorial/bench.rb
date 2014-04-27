require 'benchmark'

def total n
  i, j = 1
  result = 0

  while n > i
    j = 1
    while i > j
      result += 1
      j += 1
    end
    i += 1
  end

  return result
end

p total(10000)

p Benchmark.realtime{ total(10000) }
