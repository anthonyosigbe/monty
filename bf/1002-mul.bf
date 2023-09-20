# Initialize Block 0 with user input (first digit) and Block 1 with the second digit
,>,
# Set up Block 2 to represent the number of times to repeat
>++++++
[
	>++++++++    # Step 1: Add 8 to Block 2 (Initial value: 8)
	<-           # Step 2: Move back to Block 2
]

# Multiply Block 1 with Block 2 and store the result in Block 0
>>++++++
[
	>++++++++    # Step 3: Add 8 to Block 0 (Initial value: 8)
	<-           # Step 4: Move back to Block 2
]

# Print the result in Block 0 (ASCII value)
>
# Subtract 48 from Block 0 to convert ASCII to digit
[
	-             # Step 5: Subtract 1 from Block 0 (ASCII value of '0': 48)
	<<<<-         # Step 6: Move to Block 2 and clear it
	<-            # Step 7: Move back to Block 0
	>>>>>         # Step 8: Move to Block 0
]

# Print the result as a digit
<<<<<

# Perform the same addition loop to add 48 back to Block 0
[
	>             # Step 9: Move to Block 2
	[             # Start of loop to add 48
		>+          # Step 10: Add 1 to Block 2
		>>+         # Step 11: Move to Block 0 and add 1 to it
		<<<-        # Step 12: Move back to Block 2
	]
	>>>           # Step 13: Move to Block 2
	[             # Start of loop to subtract 48
		-           # Step 14: Subtract 1 from Block 2
		<<<+        # Step 15: Move to Block 0 and subtract 1 from it
		>>>         # Step 16: Move back to Block 2
	]
	<<<<-         # Step 17: Move to Block 0 and clear it
]

# Move to Block 0 and print the final result (ASCII value)
>>
[
	-             # Step 18: Subtract 1 from Block 0
	>+            # Step 19: Move to Block 1 and add 1 to it
	<             # Step 20: Move back to Block 0
]
>.
