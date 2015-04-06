import sys

def clean_file(file_name):
  fle = open(file_name, 'r')
  data = fle.read().strip().split()
  return filter(lambda x : len(x) > 0, data)

args = sys.argv

original = clean_file(args[1])
generated = clean_file(args[2])

print "original file contains ", len(original)
print "generated file contains ", len(generated)
files_same = True

for (idx, (x, y)) in enumerate(zip(original, generated)):
  if x != y:
    print "files differ at line ", (idx + 1)
    print "mismatch between ", x, " and ", y
    files_same = False
    break

if files_same:
  print "The files are the same :)"
else:
  print "Files are not the same :("

