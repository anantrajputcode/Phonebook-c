# Password Strength Checker

A simple C program that evaluates the strength of a password based on various criteria.

## Description

This program analyzes a password and determines its strength based on the following factors:
- Presence of uppercase letters
- Presence of lowercase letters
- Presence of digits
- Presence of special characters
- Minimum length of 8 characters

## Features

- Real-time password strength evaluation
- Three strength levels: Weak, Medium, and Strong
- Simple command-line interface
- Character type detection (uppercase, lowercase, digits, special characters)

## Compilation

To compile the program, use any C compiler such as GCC:

```bash
gcc password_checker.c -o password_checker
```

## Usage

Run the compiled program:

```bash
./password_checker
```

Enter your password when prompted. The program will analyze it and display the strength level.

### Example

```
Enter your password: MyP@ss123

Password Strength: Strong
```

## Strength Criteria

The program calculates strength based on a scoring system (0-5 points):

- **Weak** (0-2 points): Password lacks multiple character types or is too short
- **Medium** (3-4 points): Password has good variety but may be missing some criteria
- **Strong** (5 points): Password meets all criteria including length and character variety

### Scoring Breakdown
- 1 point: Contains uppercase letters
- 1 point: Contains lowercase letters
- 1 point: Contains digits
- 1 point: Contains special characters
- 1 point: Length is 8 or more characters

## Limitations

- The program uses `scanf("%s", password)` which stops at whitespace, so passwords containing spaces cannot be fully tested
- Maximum password length is limited to 99 characters
- No buffer overflow protection beyond the array size
- Doesn't check against common password lists or patterns

## Security Note

This is a basic educational tool for demonstrating password strength concepts. For production applications, use established password validation libraries and follow current security best practices.

## Requirements

- C compiler (GCC, Clang, or similar)
- Standard C library with `stdio.h`, `string.h`, and `ctype.h`

## License

Free to use and modify for educational purposes.