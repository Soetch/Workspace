package SoetchErrorHandler.Errors;

public class ParametersErrors {
    /**
     * @param methodName methodName is a parameter that needs to be replaced by the name of the tested method to check it is alive.
     */
    public static void Alive(String methodName) {
        String aliveMessage = "The " + methodName + " is Alive !";
        System.out.println(aliveMessage);
    }

    /**
     * @param methodName methodName is a parameter that needs to be replaced by the name of the tested method to check if it is alive, although it shouldn't.
     */
    public static void ShouldNoBeAlive(String methodName) {
        String shouldNotBeAlive = "The " + methodName + " shouldn't be Alive !";
        System.out.println(shouldNotBeAlive);
    }
}
