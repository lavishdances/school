<!DOCTYPE html>
<html>
<head>
  <title>Form Validation</title>
  <script>
    function validateForm() {
      var name = document.forms["myForm"]["fname"].value;
      var email = document.forms["myForm"]["email"].value;
      var password = document.forms["myForm"]["password"].value;
      
      // Validate name field
      if (name == "") {
        alert("Name must be filled out");
        return false;
      }
      
      // Validate email field
      if (email == "") {
        alert("Email must be filled out");
        return false;
      }
      // Email validation using regular expression
      var emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
      if (!emailRegex.test(email)) {
        alert("Invalid email format");
        return false;
      }
      
      // Validate password field
      if (password == "") {
        alert("Password must be filled out");
        return false;
      }
      // Password length validation
      if (password.length < 8) {
        alert("Password must be at least 8 characters long");
        return false;
      }
      
      // All fields are valid, form can be submitted
      return true;
    }
  </script>
</head>
<body>
  <form name="myForm" onsubmit="return validateForm()">
    <label for="fname">Name:</label>
    <input type="text" id="fname" name="fname">
    <br><br>
    <label for="email">Email:</label>
    <input type="email" id="email" name="email">
    <br><br>
    <label for="password">Password:</label>
    <input type="password" id="password" name="password">
    <br><br>
    <input type="submit" value="Submit">
  </form>
</body>
</html>
In this example, we have a form with three fields: "Name", "Email", and "Password". The form's onsubmit event is set to call the validateForm() function.

Inside the validateForm() function, we get the values of the name, email, and password fields using document.forms["myForm"]["fname"].value, document.forms["myForm"]["email"].value, and document.forms["myForm"]["password"].value, respectively.

We then perform validation checks on each field. If any validation check fails, an alert is displayed with an appropriate error message, and the function returns false, preventing the form from being submitted.

In the example, we validate the name field to ensure it is not empty. We validate the email field to ensure it is not empty and matches a regular expression pattern for a valid email format. We validate the password field to ensure it is not empty and has a minimum length of 8 characters.