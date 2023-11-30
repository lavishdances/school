Using an exisitng framework:

Install the Validator.js library by including the following script tag in your HTML file:

<script src="https://cdnjs.cloudflare.com/ajax/libs/validator/13.6.0/validator.min.js"></script>
Use the library to validate form inputs. Here's an example:

please give me an example of validator.js integration
Certainly! Here's an example of how you can integrate Validator.js into your JavaScript code for form validation:

Include the Validator.js library by adding the following script tag in the head section of your HTML file:

<script src="https://cdnjs.cloudflare.com/ajax/libs/validator/13.6.0/validator.min.js"></script>
Create a function to handle the form validation. Here's an example:

<form name="myForm" onsubmit="return validateForm()">
  <label for="email">Email:</label>
  <input type="email" id="email" name="email">
  <br><br>
  <input type="submit" value="Submit">
</form>

<script>
  function validateForm() {
    var email = document.forms["myForm"]["email"].value;

    if (validator.isEmpty(email)) {
      alert("Email must be filled out");
      return false;
    }

    if (!validator.isEmail(email)) {
      alert("Invalid email format");
      return false;
    }

    return true;
  }
</script>
In this example, we have a simple form with an email field. The validateForm() function is called when the form is submitted. We use the validator object provided by Validator.js to perform form validation.

We check if the email field is empty using validator.isEmpty(email). If it is empty, we display an alert message.
We then use validator.isEmail(email) to check if the email format is valid. If it is not a valid email format, we display another alert message.
You can add more validation rules as needed, using the various methods provided by Validator.js. https://github.com/validatorjs/validator.js