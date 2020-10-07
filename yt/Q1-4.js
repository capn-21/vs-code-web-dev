angular.module("myapp",[])
.controller("DisplayName",function($scope){
$scope.string="Hello World";
})

.controller("addition",function($scope){
    $scope.a=354;
    $scope.b=675;
})

.controller("cricket",function($scope){
    $scope.players=["Sachin Tendulkar","Virat Kolhi","Suresh Raina","Hardik Pandya"];
   
    $scope.table=[{name:"Sachin Tendulkar",country:"india"},
    {name:"Mahendra Singh Dhoni",country:"India"},
    {name:"Sachin Tendulkar",country:"india"},
    {name:"David Warner",country:"australia"},
    {name:"Kane Williamson",country:"New Zealand"},
    {name:"Virat Kolhi",country:"india"},
    {name:"Mitchell Starc",country:"australia"}];
})

