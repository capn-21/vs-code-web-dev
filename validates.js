function validateForm() {
        var name = form["name"].value;
        if (name === "") {
          alert("First name cannot be left blank.");
          return false;
        }

        var name = form["phone"].value;
        if (name === "") {
          alert("phone cannot be left blank.");
          return false;
        }
        var name = form["address"].value;
        if (name === "") {
          alert("address cannot be left blank.");
          return false;
        }
        

      }
      
       var form = document.getElementById("aadhar");
       form.onsubmit = validateForm;