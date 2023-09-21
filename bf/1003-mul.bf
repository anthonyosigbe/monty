,          # Read the first digit into Block #0
>,         # Move to Block #1 and read the second digit

[          # Start of multiplication loop
  -        # Subtract 1 from Block #1 (decrease the second digit)
  >        # Move to Block #2 (used for accumulation)

  [        # Start of inner loop (multiply Block #0 with Block #1)
    <+     # Increment Block #2 and Block #0
    >>-    # Move to Block #1 and decrease it
  ]        # End of inner loop

  <<       # Move to Block #0
  >-       # Decrease Block #1

]          # End of multiplication loop

>.         # Move to Block #2 and print the result
