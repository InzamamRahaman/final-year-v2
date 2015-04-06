import sys

def clean_input(str_repr):
  split_by_sep = str_repr.split()
  non_empty_strs = filter(lambda x : len(x) > 0, split_by_sep)
  return non_empty_strs

def test_similarity(arr1, arr2):
  counter = 0
  for (x, y) in zip(arr1, arr2):
    if x != y:
      return (counter, x, y)
    else:
      counter += 1
  return (counter, -1, -1)

def similarity_str(arr1, arr2):
  sim = test_similarity(arr1, arr2)
  if sim[1] == -1:
    print "Files are the same"
  else:
    print "Files the same until word ", sim[0]
    print "Violating comparison ", sim[1], " and ", sim[2]

      

arguments = sys.argv
in_file_1_name = arguments[1]
in_file_2_name = arguments[2]

in_file_1 = open(in_file_1_name, 'r')
in_file_2 = open(in_file_2_name, 'r')

in_file_1_contents = in_file_1.read()
in_file_2_contents = in_file_2.read();

in_file_1.close()
in_file_2.close()

in_file_1_contents_clean = clean_input(in_file_1_contents)
in_file_2_contents_clean = clean_input(in_file_2_contents)

print "=============================================="
print "File comparison statistics"

print "# of words in 1st file: ", len(in_file_1_contents_clean)
print "# of words in 2nd file: ", len(in_file_2_contents_clean)
similarity_str(in_file_1_contents_clean, in_file_2_contents_clean)

print "=============================================="



