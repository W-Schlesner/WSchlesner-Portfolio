def process_paragraph(paragraph):
    initial_list = paragraph.split(' ')
    processed_list = []
    for t in initial_list:
        t = t.strip('.!,?').strip().lower()
        processed_list.append(t)
    processed_list.sort()
    return processed_list


sample_paragraph = "Here is the perfect system for cleaning your room. First, move all of the items that do not have a proper place to the center of the room. Get rid of at least five things that you have not used within the last year. Take out all of the trash, and place all of the dirty dishes in the kitchen sink. Now find a location for each of the items you had placed in the center of the room. For any remaining items, see if you can squeeze them in under your bed or stuff them into the back of your closet. See, that was easy!"
print(sample_paragraph)
processed_paragraph = process_paragraph(sample_paragraph)
print(processed_paragraph)
