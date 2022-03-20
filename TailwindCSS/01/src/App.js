import { View } from "react-native";

export default function App() {
  return (
    <body className="dark:bg-grey-800">
      <View nativeID="Header">
        <header className="flex sticky top-0 z-40 flex-none py-3 mx-auto w-full bg-white border-b border-gray-200 dark:border-gray-600 dark:bg-gray-800">
        <div>
          <button id="theme-toggle"
                  type="button"
                  className="bg-blue-700 rounded-full px-5 py-2.5 mr-2 mb-2 w-auto hover:bg-blue-600 dark:text-black">
            <svg
              id="theme-toggle-light-icon"
              class="w-5 h-5 hidden"
              fill="currentColor"
              viewBox="0 0 20 20"
              xmlns="http://www.w3.org/2000/svg">
              <path
                d="M17.293 13.293A8 8 0 016.707 2.707a8.001 8.001 0 1010.586 10.586z">
              </path>
            </svg>
            <svg
              id="theme-toggle-dark-icon"
              class="w-5 h-5 hidden text-white"
              fill="currentColor"
              viewBox="0 0 20 20"
              xmlns="http://www.w3.org/2000/svg">
              <path
                d="M10 2a1 1 0 011 1v1a1 1 0 11-2 0V3a1 1 0 011-1zm4 8a4 4 0 11-8 0 4 4 0 018 0zm-.464 4.95l.707.707a1 1 0 001.414-1.414l-.707-.707a1 1 0 00-1.414 1.414zm2.12-10.607a1 1 0 010 1.414l-.706.707a1 1 0 11-1.414-1.414l.707-.707a1 1 0 011.414 0zM17 11a1 1 0 100-2h-1a1 1 0 100 2h1zm-7 4a1 1 0 011 1v1a1 1 0 11-2 0v-1a1 1 0 011-1zM5.05 6.464A1 1 0 106.465 5.05l-.708-.707a1 1 0 00-1.414 1.414l.707.707zm1.414 8.486l-.707.707a1 1 0 01-1.414-1.414l.707-.707a1 1 0 011.414 1.414zM4 11a1 1 0 100-2H3a1 1 0 000 2h1z"
                fill-rule="evenodd"
                clip-rule="evenodd">         
              </path>
            </svg>

          </button>
        </div>
        </header>
      </View>
      <View nativeID="Body">
        <div className="grid px-4 sm:px-6 md:px-8 mb-10 sm:mb-16 md:mb-5 place-content-center">
          <h1 className="text-3xl sm:text-5xl lg:text-6xl leading-none font-extrabold text-gray-900 dark:text-white tracking-tight mb-8">
            Hello!
          </h1>
        </div>
      </View>
    </body>
  )
}