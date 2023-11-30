To create form validation using JavaScript, you have a few options. You can use built-in form validation features in HTML, or you can customize the validation using JavaScript. Here's an overview of both approaches:

Using Built-in Form Validation in HTML:
HTML provides some built-in form validation features that can be used without relying on JavaScript. These features include attributes like required, minlength, maxlength, and more. Here's an example of how to use the required attribute to make a form field mandatory:

<form>
  Name: <input type="text" name="fname" required>
  <input type="submit" value="Submit">
</form>
In this example, if the fname field is empty, the form will not be submitted and the user will be prompted to fill in the required field.

Customizing Validation using JavaScript:
If you need more control and customization over the form validation, you can use JavaScript. Here's an example of how to validate a form field using JavaScript:

function validateForm() {
  let x = document.forms["myForm"]["fname"].value;
  if (x == "") {
    alert("Name must be filled out");
    return false;
  }
}
In this example, the validateForm function is called when the form is submitted. It checks if the fname field is empty and displays an alert message if it is.

You can also perform more complex validation using JavaScript, such as validating numeric input or validating multiple fields at once. Here are some resources that provide more information on form validation using JavaScript:

Source [1]](https://www.w3schools.com/js/js_validation.asp): 'JavaScript Form Validation' - This source provides an example of form validation using JavaScript.
Source [2]](https://developer.mozilla.org/en-US/docs/Learn/Forms/Form_validation): 'Client-side form validation - Learn web development | MDN' - This source discusses the differences between built-in form validation and JavaScript validation.
Source 'Learn JavaScript Form Validation Build a JS Project for Beginners' - This source provides a tutorial on form validation in JavaScript.
Remember, form validation is an important aspect of creating user-friendly and secure web forms. It helps ensure that the data entered by users is valid and meets the required criteria.

<!DOCTYPE html>
<html>
<head>
  <title>Form Validation</title>
  <script>
    function validateForm() {
     var name = document.forms["myForm"]["fname"].value;
      var email = document.forms["myForm"]["email"].value;
      if (name == "") {
        alert("Name must be filled out");
        return false;
      }
      if (email == "") {
        alert("Email must be filled out");
        return false;
      } 
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
    <input type="submit" value="Submit">
  </form>
</body>
</html>
In this example, we have a simple form with two fields: "Name" and "Email". The form's onsubmit event is set to call the validateForm() function.

Inside the validateForm() function, we get the values of the name and email fields using document.forms["myForm"]["fname"].value and document.forms["myForm"]["email"].value, respectively.

We then perform the validation checks. If the name field is empty, an alert is displayed with the message "Name must be filled out" and the function returns false, preventing the form from being submitted. Similarly, if the email field is empty, an alert is displayed with the message "Email must be filled out" and the function returns false.

If both fields have values, the function returns true, allowing the form to be submitted.

You can customize this code further to perform additional validation checks or to display more specific error messages.