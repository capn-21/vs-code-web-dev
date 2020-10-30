var app = angular.module("myapp",[])
app.controller('myCtrl', function($scope, $http) {
    $http.get("records.json")
    .then(function(response) {
        $scope.employes = response.data;
    });
  });