
def read_and_clean_file(file_obj):
  file_data = file_obj.read()
  parsed_data = file_data.split()
  return filter(lambda x : len(x) > 0, parsed_data)


