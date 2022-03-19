import { View } from "react-native";

export default function App() {
  return (
    <div>
      <View nativeID="Body">
        <div className="grid px-4 sm:px-6 md:px-8 mb-10 sm:mb-16 md:mb-5 place-content-center">
          <h1 className="text-3xl sm:text-5xl lg:text-6xl leading-none font-extrabold text-gray-900 tracking-tight mb-8">Hello!</h1>
        </div>
        <div className="grid place-content-center">
          <button className="flex items-center text-white bg-blue-700 focus:ring-blue-300 font-medium rounded-full text-sm px-5 py-2.5 text-center mr-2 mb-2 w-auto dark:bg-blue-600 dark:hover:bg-blue-700 dark:focus:ring-blue-800">
            <svg xmlns="http://www.w3.org/2000/svg" className="h-5 w-5" fill="none" viewBox="2.5 0 24 24" stroke="currentColor" strokeWidth={2}>
              <path strokeLinecap="round" strokeLinejoin="round" d="M20.354 15.354A9 9 0 018.646 3.646 9.003 9.003 0 0012 21a9.003 9.003 0 008.354-5.646z"/>
            </svg>
            <span>Change Theme</span>
          </button>
        </div>
      </View>
    </div>
  )
}