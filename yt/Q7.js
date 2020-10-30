angular.module("app",[])
.controller("cc",function($scope){
    $scope.var="This is output of scoped variable inside controller."
})

.run(function($rootScope){

    $rootScope.var="This is output of rootscope form universal variables.";
})

.directive("adsd",function(){

   return{ template:"aaswfweea"}
    

})